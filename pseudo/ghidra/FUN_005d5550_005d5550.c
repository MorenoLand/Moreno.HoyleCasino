// FUN_005d5550  005d5550

bool __thiscall FUN_005d5550(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    param_2 = FUN_005f3bf0(param_1);
  }
  iVar1 = FUN_005d52e0();
  return *(char *)(iVar1 + 0x47 + param_2) != '\0';
}

