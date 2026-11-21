// FUN_005b9350  005b9350

void __thiscall FUN_005b9350(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int local_8;
  
  bVar1 = false;
  local_8 = 0;
  while (!bVar1) {
    uVar2 = FUN_005b9320(local_8);
    FUN_00610450(param_2,uVar2);
    for (; param_2[1] != 0; param_2 = (int *)((int)param_2 + *param_2)) {
      if (param_2[2] == 0) {
        FUN_005e9f20("inSetupList->mID && \"all info views must have an ID to be tracked!\"",
                     "..\\Casino\\InfoScreenController.cpp",0x53);
      }
      FUN_005b9440(param_2[2],local_8);
      if (*(int *)(param_1 + 0x24) <= param_2[6]) {
        *(int *)(param_1 + 0x24) = param_2[6] + 1;
      }
    }
    if (local_8 != 0) {
      FUN_005b9900(local_8,0);
    }
    param_2 = (int *)((int)param_2 + *param_2);
    if (param_2[1] == 0) {
      bVar1 = true;
    }
    local_8 = local_8 + 1;
  }
  return;
}

