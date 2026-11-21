// FUN_00672da0  00672da0

void __thiscall FUN_00672da0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    (**(code **)(*DAT_007947e4 + 0x188))();
    FUN_005f87d0();
  }
  else if (param_2 == 2) {
    *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + -1;
    if (*(int *)(param_1 + 500) < 0) {
      *(undefined4 *)(param_1 + 500) = 0;
    }
    piVar1 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar1 + 0xcc))();
    piVar1 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar1 + 0xcc))();
    if (*(int *)(param_1 + 500) == 0) {
      piVar1 = (int *)FUN_005fb300(2);
      (**(code **)(*piVar1 + 0xd0))();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c4 + *(int *)(param_1 + 500) * 4);
    FUN_005fb2b0(4);
    FUN_005eaf00(uVar2);
  }
  else if (param_2 == 3) {
    *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
    if (*(int *)(param_1 + 0x1f0) <= *(int *)(param_1 + 500)) {
      *(int *)(param_1 + 500) = *(int *)(param_1 + 0x1f0) + -1;
    }
    piVar1 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar1 + 0xcc))();
    piVar1 = (int *)FUN_005fb300(3);
    (**(code **)(*piVar1 + 0xcc))();
    if (*(int *)(param_1 + 500) == *(int *)(param_1 + 0x1f0) + -1) {
      piVar1 = (int *)FUN_005fb300(3);
      (**(code **)(*piVar1 + 0xd0))();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c4 + *(int *)(param_1 + 500) * 4);
    FUN_005fb2b0(4);
    FUN_005eaf00(uVar2);
  }
  return;
}

