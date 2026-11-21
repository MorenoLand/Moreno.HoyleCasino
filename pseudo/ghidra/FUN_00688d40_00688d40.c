// FUN_00688d40  00688d40

void __thiscall FUN_00688d40(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _stricmp(param_2,(char *)(param_1 + 0x107));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  FUN_00607890(&PTR_006b27f8,param_2);
  return;
}

