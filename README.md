# tree-sitter-monkey
[Monkey](https://interpreterbook.com/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)
![image](https://user-images.githubusercontent.com/66286082/200150413-604390fd-ceed-4320-8699-9ce3fe9a7fab.png)

Just learning the basics of tree-sitter

#### Neovim Integration
1. Clone repo
```bash
git clone https://github.com/jamestrew/tree-sitter-monkey.git
```
2. With the `tree-sitter-cli` installed*, run `tree-sitter generate` in the directory where this repo was cloned
3. Add the following snippet to your init.lua
```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.monkey = {
  install_info = {
    url = "your/path/to/tree-sitter-monkey",
    files = {"src/parser.c"},
  },
  filetype = "mon",
}
```
4. Restart neovim and run `:TSInstall monkey`
5. To get syntax highlighting for `.mon` files:
```bash
mkdir -p ~/.config/nvim/queries/monkey
cp your/path/to/tree-sitter-monkey/queries/highlights.scm ~/.config/nvim/queries/monkey/
```

\*`tree-sitter-cli` should already be installed with Neovim. If not see the [tree-sitter docs](https://tree-sitter.github.io/tree-sitter/creating-parsers#installation).
