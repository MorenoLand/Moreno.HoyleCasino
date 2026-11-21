// FUN_00562a00  00562a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00562a00(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00569f00(param_2);
  if (iVar2 != 0) {
    cVar1 = FUN_005f45a0(*(undefined4 *)(param_1 + 0xe8));
    if (cVar1 == '\0') {
      (**(code **)(*DAT_0162ee84 + 0x80))(iVar2,0,0,10,1,0x3f800000,_DAT_006b3654,param_1 + 0xe8);
    }
    else {
      (**(code **)(*DAT_0162ee84 + 0x80))(iVar2,0,0,10,1,0x3f800000,_DAT_006b3654,param_1 + 0xec);
    }
  }
  return;
}

