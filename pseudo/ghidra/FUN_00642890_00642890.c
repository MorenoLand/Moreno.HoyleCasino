// FUN_00642890  00642890

int __thiscall FUN_00642890(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_006427d0(param_2,param_3,param_4,1,0xe,param_1);
  if (param_4 == 0) {
    iVar2 = FUN_006427d0(param_2,param_3,0,0xf,0xf);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}

