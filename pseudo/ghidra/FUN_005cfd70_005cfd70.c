// FUN_005cfd70  005cfd70

void __thiscall FUN_005cfd70(undefined4 param_1,int param_2)

{
  char *_Str;
  int iVar1;
  
  if (param_2 == 1) {
    FUN_005dc3b0(param_1,0);
  }
  else {
    _Str = (char *)FUN_005fb8b0(0);
    iVar1 = atoi(_Str);
    if (0 < iVar1) {
      *(int *)(DAT_007947e0 + 0x4f08) = iVar1;
      (**(code **)(*DAT_007947e4 + 700))(iVar1);
    }
    FUN_005dc3b0(param_1);
  }
  return;
}

