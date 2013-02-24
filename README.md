# partial-zip
Using curl's partial downloading feature to retrieve selected portions of ZIP files.


## Usage

    ./partialzip <ZipURL> <RemotePath> <LocalPath> [numBytes]

### Examples

    ./partialzip "http://apple.com/iPhone4,1_6.1_10B142_Restore.ipsw" 038-5307-151.dmg RootFS.dmg 1024
    ./partialzip "http://apple.com/iPod4,1_5.1.1_9B206_Restore.ipsw" "Firmware/dfu/iBSS.n81ap.RELEASE.dfu" iBSS.n81ap
    ./partialzip "http://ineal.me/randomarchive.zip" "img1.png" "/home/neal/Desktop/img1.png"


--
* First example will only download 1024 bytes of `038-5307-151.dmg`.
* Use cmake 2.6 or greater to create the Makefiles.
* Requires libcurl and zlib.
* Compile instructions:
	+ `mkdir build && cd build`
	+ `cmake .. && make`
