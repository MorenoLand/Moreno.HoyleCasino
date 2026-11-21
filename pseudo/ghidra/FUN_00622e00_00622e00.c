// FUN_00622e00  00622e00

void FUN_00622e00(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int local_824 [257];
  int local_420;
  int local_41c;
  int local_418;
  int local_414;
  int *local_410;
  int *local_40c;
  undefined4 local_408;
  undefined1 local_404 [1024];
  
  iVar1 = (param_2 >> 3) * 0x20 + 2;
  local_420 = (param_3 >> 3) * 0x20 + 2;
  iVar2 = (param_4 >> 2) * 0x20 + 4;
  local_408 = FUN_00622fd0(iVar1,local_420,iVar2,local_404,param_5,param_6);
  FUN_00623400(iVar1,local_420,iVar2,param_5,local_408,local_404,local_824);
  local_410 = local_824;
  for (local_418 = 0; local_418 < 8; local_418 = local_418 + 1) {
    for (local_41c = 0; local_41c < 8; local_41c = local_41c + 1) {
      local_40c = (int *)(param_1 +
                         (((param_3 >> 3) * 8 + local_41c) * 0x20 +
                         ((param_2 >> 3) * 8 + local_418) * 0x800 + (param_4 >> 2) * 4) * 4);
      for (local_414 = 0; local_414 < 4; local_414 = local_414 + 1) {
        *local_40c = *local_410 + 1;
        local_40c = local_40c + 1;
        local_410 = local_410 + 1;
      }
    }
  }
  return;
}

