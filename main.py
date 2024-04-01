import requests
import json
from datetime import datetime

def get_owned_games(api_key, steam_id):
    url = f"http://api.steampowered.com/IPlayerService/GetOwnedGames/v0001/?key={api_key}&steamid={steam_id}&format=json&include_appinfo=true"
    response = requests.get(url)
    if response.status_code == 200:
        return response.json()
    else:
        print("Failed to retrieve owned games:", response.status_code)
        return None

def get_player_achievements(api_key, steam_id, app_id):
    url = f"http://api.steampowered.com/ISteamUserStats/GetPlayerAchievements/v0001/?appid={app_id}&key={api_key}&steamid={steam_id}"
    response = requests.get(url)
    if response.status_code == 200:
        return response.json()
    else:
        print(f"Failed to retrieve achievements for app ID {app_id}:", response.status_code)
        return None

api_key = input("Enter your Steam API key: ")
steam_id = input("Enter your Steam ID: ")

owned_games = get_owned_games(api_key, steam_id)
if owned_games:
    total_games = owned_games["response"]["game_count"]
    print("Total games owned:", total_games)
    if total_games > 0:
        print("Games (ordered by playtime):")
        sorted_games = sorted(owned_games["response"]["games"], key=lambda x: x["playtime_forever"], reverse=True)
        game_data_list = []
        
        for game in sorted_games:
            playtime_hours = round(game["playtime_forever"] / 60, 2)
            
            achievements = get_player_achievements(api_key, steam_id, game["appid"])
            if achievements and "playerstats" in achievements and "achievements" in achievements["playerstats"]:
                earned_achievements = sum(1 for achievement in achievements["playerstats"]["achievements"] if achievement["achieved"])
                total_achievements = len(achievements["playerstats"]["achievements"])
            else:
                earned_achievements = 0
                total_achievements = 0
            
            game_data_list.append({
                "name": game["name"],
                "appid": game["appid"],
                "playtime_hours": playtime_hours,
                "earned_achievements": earned_achievements,
                "total_achievements": total_achievements
            })
                
        with open("steam_data.json", "w", encoding='utf-8') as json_file:
            json.dump(game_data_list, json_file, indent=4, ensure_ascii=False)
        
        print("Data written to steam_data.json file.")
    else:
        print("No games owned.")
