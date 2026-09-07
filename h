[1mdiff --git a/init.lua b/init.lua[m
[1mindex 7179d03..284ef90 100644[m
[1m--- a/init.lua[m
[1m+++ b/init.lua[m
[36m@@ -788,7 +788,14 @@[m [mdo[m
   }[m
 [m
   local system_servers = {[m
[31m-      -- clangd = {},[m
[32m+[m[32m    -- clangd = {[m
[32m+[m[32m    -- cmd = {[m
[32m+[m[32m    -- Wonderful Toolchain / Butano / GBA[m
[32m+[m[32m    -- Uncomment when working on a Butano project.[m
[32m+[m[32m    -- 'clangd',[m
[32m+[m[32m    -- '--query-driver=/opt/wonderful/toolchain/gcc-arm-none-eabi/bin/arm-none-eabi-*',[m
[32m+[m[32m    -- },[m
[32m+[m[32m    -- },[m
   }[m
 [m
   -- Automatically install LSPs and related tools to stdpath for Neovim[m
[36m@@ -819,8 +826,8 @@[m [mdo[m
   end[m
 [m
   for name, server in pairs(system_servers) do[m
[31m-      vim.lsp.config(name, server)[m
[31m-      vim.lsp.enable(name)[m
[32m+[m[32m    vim.lsp.config(name, server)[m
[32m+[m[32m    vim.lsp.enable(name)[m
   end[m
 end[m
 [m
