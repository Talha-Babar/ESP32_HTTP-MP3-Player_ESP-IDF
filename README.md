# ESP32 Radio Streamer using URL in ESP-IDF

This project demonstrates streaming MP3 radio from a URL using the ESP32 and ESP-IDF framework. The program connects to a Wi-Fi network, fetches the MP3 stream over HTTP, and plays the audio via I2S.

---

## Features

- **Wi-Fi Connectivity**: Connects to a Wi-Fi network for fetching the MP3 stream.
- **HTTP MP3 Streaming**: Streams and decodes MP3 audio from a given URL.
- **Audio Output via I2S**: Outputs audio through the ESP32 I2S peripheral for external audio devices.

---

## How It Works

1. **Wi-Fi Initialization**:

   - Connects to the configured Wi-Fi network.

2. **Audio Pipeline**:

   - Fetches the MP3 stream from a URL using an HTTP client.
   - Decodes the MP3 stream using the MP3 decoder.
   - Outputs audio via the I2S peripheral.

3. **Task Handling**:
   - Streaming tasks run on the ESP32's FreeRTOS for efficient decoding and playback.
