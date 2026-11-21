// FUN_00438180  00438180

undefined4 __fastcall FUN_00438180(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
    iVar2 = FUN_00434a90(0x1f);
    iVar3 = FUN_00434a90(0x20);
    iVar4 = FUN_00434a90(0x21);
    iVar5 = FUN_00434a90(0x22);
    iVar6 = FUN_00434a90(0x23);
    iVar7 = FUN_00434a90(0x24);
    if (iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 < 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

