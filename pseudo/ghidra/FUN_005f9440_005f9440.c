// FUN_005f9440  005f9440

void __thiscall
FUN_005f9440(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_005f84f0(param_6,param_7,param_1,*(undefined4 *)(param_1 + 0x1a8));
  iVar1 = iVar1 + param_5;
  iVar2 = FUN_005f84d0(iVar1);
  iVar2 = iVar2 + param_4;
  iVar3 = FUN_005f84f0(iVar2);
  iVar3 = iVar3 + param_3;
  iVar4 = FUN_005f84d0(iVar3);
  FUN_006241c0(iVar4 + param_2,iVar3,iVar2,iVar1,param_6,param_7);
  return;
}

