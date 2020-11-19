#!/bin/bash
SYSROOT="/home/silverchris/x-tools/arm-unknown-linux-gnueabi/arm-unknown-linux-gnueabi/sysroot"
export PKG_CONFIG_DIR=""
export PKG_CONFIG_LIBDIR="$SYSROOT/usr/lib/pkgconfig"
export PKG_CONFIG_SYSROOT_DIR=$SYSROOT
export PATH="$PATH:/home/silverchris/x-tools/arm-unknown-linux-gnueabi/bin"
export DESTDIR=$SYSROOT

echo $SYSROOT
echo $PKG_CONFIG_DIR
echo $PKG_CONFIG_LIBDIR
echo $PKG_CONFIG_SYSROOT_DIR
echo $PATH

#wget https://www.openssl.org/source/openssl-1.1.1h.tar.gz
#tar xvf openssl-1.1.1h.tar.gz
#cd openssl-1.1.1h
#./Configure linux-armv4 -march=armv7-a --cross-compile-prefix=arm-unknown-linux-gnueabi- --prefix=$SYSROOT/usr
#make
#make install

#cd ..
#wget https://github.com/protocolbuffers/protobuf/releases/download/v3.14.0/protobuf-cpp-3.14.0.tar.gz
#tar xvf protobuf-cpp-3.14.0.tar.gz
#cd protobuf-3.14.0
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --with-protoc=protoc --prefix=/usr/ LDFLAGS="-static-libgcc -static-libstdc++" CXXFLAGS="-static-libgcc -static-libstdc++"
#make -j12 LDFLAGS="-static-libgcc -static-libstdc++" CXXFLAGS="-static-libgcc -static-libstdc++"
#make install

#Using eudev, as udev is part of systemd now, and I don't want to mess with that
#cd ..
#wget https://ftp.osuosl.org/pub/clfs/conglomeration/udev/udev-168.tar.bz2
#tar xf udev-168.tar.bz2
#cd udev-168
#autoreconf -f -i -s
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --disable-gudev --disable-introspection --disable-extras --enable-static=yes
#make -j10
#make install

#cd ..
#wget https://github.com/libusb/libusb/archive/v1.0.15.tar.gz
#tar xf v1.0.15.tar.gz
cd libusb-1.0.15
#./autogen.sh
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr
#make
make install

#wget https://dl.bintray.com/boostorg/release/1.74.0/source/boost_1_74_0.tar.gz
#tar xf boost_1_74_0.tar.gz
#cd boost_1_74_0
#./bootstrap.sh
#sed -i '/using gcc ;/c \using gcc : arm : arm-unknown-linux-gnueabi-g++ ;' project-config.jam
#./b2 install target-os=linux architecture=arm address-model=32 binary-format=elf threading=multi toolset=gcc-arm --prefix=$SYSROOT/usr/
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT
#make -j10
#make install

#cd ..
#wget https://download.gnome.org/sources/glib/2.22/glib-2.22.1.tar.gz 
#tar xf glib-2.22.1.tar.gz
#cd glib-2.22.1
#echo "glib_cv_stack_grows=no" >> mazda.cache
#echo "glib_cv_uscore=no" >> mazda.cache
#echo "ac_cv_func_posix_getpwuid_r=yes" >> mazda.cache
#echo "ac_cv_func_posix_getgrgid_r=yes" >> mazda.cache
#autoreconf -f -i -s
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr --cache-file=mazda.cache
#make
#make install

#cd ..
#wget https://github.com/libexpat/libexpat/releases/download/R_2_2_10/expat-2.2.10.tar.xz
#tar xf expat-2.2.10.tar.xz
#cd expat-2.2.10
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/
#make
#make install

#cd ..
#wget https://dbus.freedesktop.org/releases/dbus/dbus-1.6.30.tar.gz 
#tar xf dbus-1.6.30.tar.gz
#cd dbus-1.6.30
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/
#make
#make install

#cd ..
#wget https://sourceforge.net/projects/dbus-cplusplus/files/dbus-c%2B%2B/0.9.0/libdbus-c%2B%2B-0.9.0.tar.gz/download -O libdbus-c++-0.9.0.tar.gz
#tar xf libdbus-c++-0.9.0.tar.gz
#cd libdbus-c++-0.9.0
#autoreconf -f -i -s
#wget https://sources.debian.org/data/main/d/dbus-c++/0.9.0-8.1/debian/patches/03_add_unistd_header.patch
#patch -p1 <03_add_unistd_header.patch
#wget https://sources.debian.org/data/main/d/dbus-c++/0.9.0-8.1/debian/patches/06_fix_gcc-7_ftbfs.patch
#patch -p1 <06_fix_gcc-7_ftbfs.patch
#wget https://sources.debian.org/data/main/d/dbus-c++/0.9.0-8.1/debian/patches/07_fix_mutex_ftbfs.patch
#patch -p1 < 07_fix_mutex_ftbfs.patch
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/ --disable-ecore --disable-tests --disable-examples
#make
#make install

#cd ..
#wget https://download.savannah.nongnu.org/releases/libunwind/libunwind-1.5.0.tar.gz
#tar xf libunwind-1.5.0.tar.gz
#cd libunwind-1.5.0
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/
#make
#make install

#cd ..
#wget ftp://ftp.alsa-project.org/pub/lib/alsa-lib-1.2.4.tar.bz2
#tar xf alsa-lib-1.2.4.tar.bz2
#cd alsa-lib-1.2.4
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/
#make
#make install

#cd ..
#wget ftp://xmlsoft.org/libxml2/libxml2-sources-2.9.9.tar.gz
#tar xf libxml2-sources-2.9.9.tar.gz
#cd libxml2-2.9.9 
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/
#make
#make install

#FIX THE DAMN LIBTOOL FILES
#find $SYSROOT/usr/lib -type f -name '*.la' -exec sed -i~ -e "s;/usr;$SYSROOT/usr;g"  {} \;

#cd ..i
#wget https://gstreamer.freedesktop.org/src/gstreamer/gstreamer-0.10.35.tar.gz 
#tar xf gstreamer-0.10.35.tar.gz
#cd gstreamer-0.10.35
#autoreconf -f -i -s
#sed -i -e '/YYLEX_PARAM/d' -e '/parse-param.*scanner/i %lex-param { void *scanner }' gst/parse/grammar.y
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/
#make V=1
#make install

#find $SYSROOT/usr/lib -type f -name 'libgst*.la' -exec sed -i~ -e "s;/usr;$SYSROOT/usr;g"  {} \;

#cd ..
#wget https://gstreamer.freedesktop.org/src/gst-plugins-base/gst-plugins-base-0.10.35.tar.gz
#tar xf gst-plugins-base-0.10.35.tar.gz
#cd gst-plugins-base-0.10.35
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/ --disable-ogg --disable-vorbis #These don't want to build
#make V=1
#make install

#wget https://gstreamer.freedesktop.org/src/gst-plugins-base/gst-plugins-bad-0.10.24.tar.gz
#tar xf gst-plugins-bad-0.10.24.tar.xz
#cd gst-plugins-bad-0.10.24
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/ --disable-apexsink 
#make -j10
#make install


#wget http://sourceforge.net/projects/asio/files/asio/1.18.0%20%28Stable%29/asio-1.18.0.tar.bz2/download -O asio-1.18.0.tar.bz2
#tar xvf asio-1.18.0.tar.bz2
#cd asio-1.18.0
#./configure --host=arm-unknown-linux-gnueabi --with-sysroot=$SYSROOT --prefix=/usr/ 
#make
#make install

#git clone https://github.com/jwinarske/aasdk.git
#cd aasdk
#git checkout factor_out_boost
#cmake -DCMAKE_TOOLCHAIN_FILE=../arm-unknown-linux-gnueabi.toolchain .
#make


#wget https://github.com/libsigcplusplus/libsigcplusplus/releases/download/2.10.4/libsigc++-2.10.4.tar.xz
#tar xf libsigc++-2.10.4.tar.xz
#cd libsigc++-2.10.4
#meson --prefix=/usr/ --libdir=lib --cross-file=../cross_file.txt build .
#cd build
#ninja
#ninja install
#cd ..
#cd ..

#wget https://github.com/dbus-cxx/dbus-cxx/archive/0.12.0.tar.gz
#tar xf 0.12.0.tar.gz
#cd dbus-cxx-0.12.0 
#cmake -DCMAKE_TOOLCHAIN_FILE=../arm-unknown-linux-gnueabi.toolchain -DCMAKE_INSTALL_PREFIX=/usr
#make
#make install
