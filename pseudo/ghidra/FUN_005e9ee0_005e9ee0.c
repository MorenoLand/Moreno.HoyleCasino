// FUN_005e9ee0  005e9ee0

undefined4 FUN_005e9ee0(char param_1)

{
  SHORT SVar1;
  undefined2 extraout_var;
  
  SVar1 = GetAsyncKeyState((int)param_1);
  return CONCAT31((int3)(CONCAT22(extraout_var,SVar1) >> 8),((int)SVar1 & 0x8000U) != 0);
}

