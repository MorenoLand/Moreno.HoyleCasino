// FUN_005e9e80  005e9e80

undefined4 FUN_005e9e80(void)

{
  SHORT SVar1;
  
  SVar1 = GetAsyncKeyState(0x10);
  return CONCAT31((int3)(((int)SVar1 & 0x8000U) >> 8),((int)SVar1 & 0x8000U) != 0);
}

