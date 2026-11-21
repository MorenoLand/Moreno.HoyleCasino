// FUN_005e9250  005e9250

void FUN_005e9250(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  undefined4 local_20;
  undefined4 local_18;
  
  piVar1 = (int *)FUN_005fb2b0(0);
  if (piVar1 != (int *)0x0) {
    FUN_005fb3a0(0);
    iVar2 = FUN_00606490();
    local_18 = 0x30d642;
    switch(iVar2) {
    case 0:
      local_18 = 0x30d642;
      break;
    case 1:
      local_18 = 0x30d643;
      break;
    case 2:
      local_18 = 0x30d644;
      break;
    case 3:
      local_18 = 0x30d628;
    }
    FUN_005eaf00(local_18);
    FUN_005fb3a0(iVar2 + 1);
    local_24 = FUN_00606490();
    if (iVar2 == 3) {
      if (local_24 < 8) {
        if (4 < local_24) {
          local_24 = local_24 + 1;
        }
        (**(code **)(*piVar1 + 0xb0))(local_24);
      }
      else {
        local_20 = 0;
        if (local_24 == 8) {
          local_20 = 1;
        }
        else if (local_24 == 9) {
          local_20 = 2;
        }
        FUN_005eaf00(0x30d62c);
        (**(code **)(*piVar1 + 0xb0))(local_20);
      }
    }
    else {
      (**(code **)(*piVar1 + 0xb0))(local_24);
    }
    piVar1 = (int *)FUN_005fb2b0(1);
    FUN_005fb3a0(5);
    uVar3 = FUN_00606490();
    (**(code **)(*piVar1 + 0xb0))(uVar3);
  }
  return;
}

