# Spotible
A pebble app to control the Spotify playback on your smartphone and other
devices, connected with Spotify Connect.

## Getting started

To build the project you will need a Pebble SDK.

### Docker image

```sh
docker pull dmorgan81/rebble
```
After download, place [this](https://github.com/Spitemare/rebble-docker/blob/master/rebble.sh) shell script somewhere, and write it's path to PATH.

Now you can use Pebble SDK command by `rebble.sh command`.

### Manual install

Download [pebble-tool](https://github.com/pebble/pebble-tool/releases), unpack and
place pebble executable to PATH.

Now, install Python 2.7, create environment and install python requirements. (You should also
replace pypkjs dependency, for example to this - https://github.com/gfunkmonk/pypkjs/archive/v1.1.2.tar.gz

After, install Pebble SDK by command:

```sh
pebble sdk install url_of_pebble_sdk_package
```

And now, you can use pebble command:

```sh
pebble command
```

### Build project
To build Spotible use this command:

```sh
rebble.sh build
```

### Install on the phone
Go to the Pebble app settings -> 'Developer Connection' -> Enable. Then, use
this command with your settings:

```sh
rebble.sh install --phone ip_address_from_app
```

To enable logs:
```sh
rebble.sh install --logs --phone ip_address_from_app
```

## To Do

* Pebble C side:
  - [ ] current song/album/artist info
  - [ ] song progress bar
  - [ ] current song action bar: previous, next, volume, like
  - [ ] playlists window and action bar: play, shuffle, repeat
  - [ ] animations

* Pebble JS side:
  - [ ] getting info about current song
  - [ ] sending actions to Spotify: next, previous, like, dislike, volume
  - [ ] getting info about playlists, sending actions to Spotify: play, shuffle, repeat

* Android helper app:
  - [ ] proxying interactions to Android Spotify SDK
