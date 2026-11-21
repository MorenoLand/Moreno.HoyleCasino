// FUN_005ffe80  005ffe80

void __thiscall
FUN_005ffe80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00602830(param_2,param_3,param_4,param_5,param_6,0,0);
  iVar1 = FUN_005ef050();
  FUN_005ecc60(iVar1 + 5);
  iVar1 = FUN_005ef130();
  FUN_005eccb0(iVar1 + 2);
  FUN_00600300(param_7,param_8);
  uVar2 = (**(code **)(*param_1 + 0x54))();
  uVar2 = (**(code **)(*param_1 + 0x4c))(uVar2);
  (**(code **)(*param_1 + 0x44))(uVar2);
  return;
}

