// FUN_005e9e60  005e9e60

undefined4 FUN_005e9e60(void)

{
  SHORT SVar1;
  
  SVar1 = GetAsyncKeyState(0x11);
  return CONCAT31((int3)(((int)SVar1 & 0x8000U) >> 8),((int)SVar1 & 0x8000U) != 0);
}

