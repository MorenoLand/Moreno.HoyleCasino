// FUN_005e0280  005e0280

void FUN_005e0280(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int local_8;
  
  for (local_8 = 1; local_8 < 0x13; local_8 = local_8 + 1) {
    piVar1 = (int *)FUN_005fb550(local_8);
    (**(code **)(*piVar1 + 0x70))();
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    piVar1 = (int *)FUN_005fb2b0(local_8);
    (**(code **)(*piVar1 + 0x70))();
  }
  piVar1 = (int *)FUN_005fb860(0);
  (**(code **)(*piVar1 + 0x70))();
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    piVar1 = (int *)FUN_005fb350(param_3 + local_8);
    (**(code **)(*piVar1 + 0x70))();
  }
  piVar1 = (int *)FUN_005fb300(0x17);
  (**(code **)(*piVar1 + 0x70))();
  switch(param_2) {
  case 0:
    piVar1 = (int *)FUN_005fb2b0(0);
    (**(code **)(*piVar1 + 0x74))();
    piVar1 = (int *)FUN_005fb350(3);
    (**(code **)(*piVar1 + 0x74))();
    piVar1 = (int *)FUN_005fb350(4);
    (**(code **)(*piVar1 + 0x74))();
    piVar1 = (int *)FUN_005fb860(0);
    (**(code **)(*piVar1 + 0x74))();
    for (local_8 = 1; local_8 < 10; local_8 = local_8 + 1) {
      piVar1 = (int *)FUN_005fb550(local_8);
      (**(code **)(*piVar1 + 0x74))();
    }
    break;
  case 1:
    piVar1 = (int *)FUN_005fb2b0(1);
    (**(code **)(*piVar1 + 0x74))();
    for (local_8 = 10; local_8 < 0xe; local_8 = local_8 + 1) {
      piVar1 = (int *)FUN_005fb550(local_8);
      (**(code **)(*piVar1 + 0x74))();
    }
    piVar1 = (int *)FUN_005fb350(5);
    (**(code **)(*piVar1 + 0x74))();
    piVar1 = (int *)FUN_005fb350(6);
    (**(code **)(*piVar1 + 0x74))();
    break;
  case 2:
    piVar1 = (int *)FUN_005fb2b0(2);
    (**(code **)(*piVar1 + 0x74))();
    for (local_8 = 0xe; local_8 < 0x10; local_8 = local_8 + 1) {
      piVar1 = (int *)FUN_005fb550(local_8);
      (**(code **)(*piVar1 + 0x74))();
    }
    for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
      piVar1 = (int *)FUN_005fb350(local_8 + 7);
      (**(code **)(*piVar1 + 0x74))();
    }
    piVar1 = (int *)FUN_005fb300(0x17);
    (**(code **)(*piVar1 + 0x74))();
    break;
  case 3:
    piVar1 = (int *)FUN_005fb2b0(3);
    (**(code **)(*piVar1 + 0x74))();
    for (local_8 = 0x10; local_8 < 0x13; local_8 = local_8 + 1) {
      piVar1 = (int *)FUN_005fb550(local_8);
      (**(code **)(*piVar1 + 0x74))();
    }
  }
  return;
}

