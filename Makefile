run:
	tree-sitter generate
	# tree-sitter parse example.http
	tree-sitter parse ../snippetbox/main.http
	# cp ./parser.so ~/.local/share/nvim/lazy/nvim-treesitter/parser/customhttp.so
