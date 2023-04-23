-- NVIM OPTS --
vim.opt.tabstop = 2
vim.opt.shiftwidth = 2
vim.opt.expandtab = true
vim.opt.number = true
vim.opt.termguicolors = true
vim.cmd('colorscheme base16-solarized-dark')
vim.cmd('set cursorline')

local map = vim.api.nvim_set_keymap
local opts = { noremap = true, silent = true }
vim.g.mapleader = ','

map('n', '<leader>p', '<Cmd>NnnPicker<CR>', opts)
map('n', '<leader>c', '<Cmd>ColorizerToggle<CR>', opts)
map('n', '<leader>t', '<Cmd>BufferPick<CR>', opts)


-- LSP --
require('lspconfig').pylsp.setup{}
--require('lspconfig').rust_analyzer.setup{}

-- NNN --
require('nnn').setup()

-- COLORIZER --
require('colorizer').setup {
  filetypes = { "*" },
  user_default_options = {
    mode = "virtualtext",
  },
}

-- COQ --
vim.g.coq_settings = {
  ["auto_start"] = "shut-up"
}

-- LEAP -- 
require('leap').add_default_mappings()

return require('packer').startup(function(use)
  use 'wbthomason/packer.nvim'
  use 'neovim/nvim-lspconfig'
  use 'ms-jpq/coq_nvim'
  use 'ms-jpq/coq.artifacts'
  use 'luukvbaal/nnn.nvim'
  use 'romgrk/barbar.nvim'
  use 'nvim-tree/nvim-web-devicons'
  use 'NvChad/nvim-colorizer.lua'
  use 'gardenfern/base16-nvim'
  use 'ggandor/leap.nvim'	


end)
