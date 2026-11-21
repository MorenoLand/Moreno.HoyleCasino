// FUN_005f9330  005f9330

void __thiscall
FUN_005f9330(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005f84f0(param_4,param_5,param_1,*(undefined4 *)(param_1 + 0x1a8));
  iVar1 = iVar1 + param_3;
  iVar2 = FUN_005f84d0(iVar1);
  FUN_00623ab0(iVar2 + param_2,iVar1,param_4,param_5);
  return;
}

