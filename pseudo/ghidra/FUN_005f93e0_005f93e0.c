// FUN_005f93e0  005f93e0

void __thiscall
FUN_005f93e0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_005f84f0(param_5,param_6,param_1,*(undefined4 *)(param_1 + 0x1a8));
  iVar1 = iVar1 + param_4;
  iVar2 = FUN_005f84f0(iVar1);
  iVar2 = iVar2 + param_3;
  iVar3 = FUN_005f84d0(iVar2);
  FUN_00623f00(iVar3 + param_2,iVar2,iVar1,param_5,param_6);
  return;
}

