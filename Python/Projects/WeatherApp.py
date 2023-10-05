import requests
import tkinter as tk

api_key = "0f271a3949a3db314d000a26a95b10a9"

def display_weather_info():
    user_input = city_entry.get()
    weather_data = requests.get(f"https://api.openweathermap.org/data/2.5/weather?q={user_input}&units=metric&APPID={api_key}")
    
    if weather_data.status_code == 200:
        data = weather_data.json()
        weather_main = data['weather'][0]['main']
        temperature = data['main']['temp']
        feels_like = data['main']['feels_like']
        pressure = data['main']['pressure']
        info_text.set(f"Weather Main: {weather_main}\nTemperature: {temperature}°C\nFeels Like: {feels_like}°C\nPressure: {pressure} hPa")
    else:
        info_text.set("City not found")

# Create a tkinter window
root = tk.Tk()
root.title("Weather Information")

# Create a label and entry widget for city input
city_label = tk.Label(root, text="Enter city: ")
city_label.pack()
city_entry = tk.Entry(root)
city_entry.pack()

# Create a button to fetch weather information
fetch_button = tk.Button(root, text="Fetch Weather", command=display_weather_info)
fetch_button.pack()

# Create a label to display weather information
info_text = tk.StringVar()
info_label = tk.Label(root, textvariable=info_text)
info_label.pack()

root.mainloop()
