# partial-zip
Using curl's partial downloading feature to retrieve selected portions of ZIP files.


## Usage

    ./partialzip <ZipURL> <RemotePath> <LocalPath>

### Examples

    ./partialzip "http://apple.com/iPod4,1_5.1.1_9B206_Restore.ipsw" "Firmware/dfu/iBSS.n81ap.RELEASE.dfu" iBSS.n81ap
    ./partialzip "http://ineal.me/randomarchive.zip" "img1.png" "/home/neal/Desktop/img1.png"


--
* Use cmake 2.6 to create the Makefiles.
* Requires libcurl and zlib.
* Compile instructions:
	+ `mkdir build && cd build`
	+ `cmake .. && make`
