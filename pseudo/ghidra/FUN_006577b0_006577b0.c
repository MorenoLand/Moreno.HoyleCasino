// FUN_006577b0  006577b0

undefined4 __thiscall FUN_006577b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x278);
  }
  iVar1 = FUN_006651e0(param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_006651e0(0);
    uVar3 = FUN_006651e0(param_2);
    uVar2 = FUN_00675f70(param_2,uVar3,uVar2);
  }
  return uVar2;
}

