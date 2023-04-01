{ pkgs }: {
	deps = [
		pkgs.python310
    pkgs.nano
    pkgs.jq.bin
    pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
    pkgs.zulu8
	];
}