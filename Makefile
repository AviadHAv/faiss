compile:
	rm -rf /usr/local/lib/libfaiss* && rm -f /usr/lib/libfaiss* && rm -rf /usr/local/include/faiss/
	make -C build -j10 faiss && make -C build -j10 install
	cp ./build/c_api/libfaiss_c.so /usr/lib/
	cd ../ && cp -r faiss /usr/local/include/faiss/