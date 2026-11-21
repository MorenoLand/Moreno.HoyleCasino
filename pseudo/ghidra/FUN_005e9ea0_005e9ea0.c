// FUN_005e9ea0  005e9ea0

undefined4 FUN_005e9ea0(void)

{
  SHORT SVar1;
  
  SVar1 = GetAsyncKeyState(0x1b);
  return CONCAT31((int3)(((int)SVar1 & 0x8000U) >> 8),((int)SVar1 & 0x8000U) != 0);
}

