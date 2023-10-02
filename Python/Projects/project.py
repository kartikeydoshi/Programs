import tkinter as tk

# Create a function to display weather information
def display_weather_info(data):
    weather_main = data['weather'][0]['main']
    temperature = data['main']['temp']
    feels_like = data['main']['feels_like']
    pressure = data['main']['pressure']

    info_text.set(f"Weather Main: {weather_main}\nTemperature: {temperature}°C\nFeels Like: {feels_like}°C\nPressure: {pressure} hPa")

# Create a tkinter window
root = tk.Tk()
root.title("Weather Information")

# Create a label to display weather information
info_text = tk.StringVar()
info_label = tk.Label(root, textvariable=info_text)
info_label.pack()

# Sample JSON data (replace this with your actual data)
sample_data = {
    'coord': {'lon': 72.8479, 'lat': 19.0144},
    'weather': [{'id': 701, 'main': 'Mist', 'description': 'mist', 'icon': '50d'}],
    'base': 'stations',
    'main': {'temp': 28.99, 'feels_like': 35.99, 'temp_min': 28.94, 'temp_max': 28.99, 'pressure': 1010, 'humidity': 89},
    'visibility': 2100,
    'wind': {'speed': 3.09, 'deg': 170},
    'clouds': {'all': 100},
    'dt': 1696227720,
    'sys': {'type': 1, 'id': 9052, 'country': 'IN', 'sunrise': 1696208352, 'sunset': 1696251416},
    'timezone': 19800,
    'id': 1275339,
    'name': 'Mumbai',
    'cod': 200
}

# Display the weather information
display_weather_info(sample_data)

root.mainloop()
