// FUN_005e9f10  005e9f10

void FUN_005e9f10(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

