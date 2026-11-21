// FUN_00623400  00623400

void FUN_00623400(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_448;
  int local_440;
  int local_43c;
  int local_438;
  int local_430;
  int local_42c;
  int local_428;
  int *local_424;
  int local_41c;
  int local_418;
  int local_414 [257];
  int local_10;
  int local_8;
  
  local_448 = local_414;
  for (local_10 = 0xff; -1 < local_10; local_10 = local_10 + -1) {
    *local_448 = 0x7fffffff;
    local_448 = local_448 + 1;
  }
  for (local_10 = 0; local_10 < param_5; local_10 = local_10 + 1) {
    iVar1 = *(int *)(param_6 + local_10 * 4);
    iVar2 = param_1 - (uint)*(byte *)(param_4 + iVar1 * 3);
    iVar3 = iVar2 * 0x1e;
    iVar6 = param_2 - (uint)*(byte *)(param_4 + 1 + iVar1 * 3);
    iVar7 = iVar6 * 0x3b;
    iVar4 = param_3 - (uint)*(byte *)(param_4 + 2 + iVar1 * 3);
    iVar5 = iVar4 * 0xb;
    local_8 = iVar5 * iVar5 + iVar7 * iVar7 + iVar3 * iVar3;
    local_430 = iVar2 * 0x1c20 + 0x3840;
    local_448 = local_414;
    local_424 = param_7;
    for (local_42c = 7; -1 < local_42c; local_42c = local_42c + -1) {
      local_43c = local_8;
      local_418 = iVar6 * 0x6cc8 + 0xd990;
      for (local_438 = 7; -1 < local_438; local_438 = local_438 + -1) {
        local_41c = local_43c;
        local_440 = iVar4 * 0x790 + 0x1e40;
        for (local_428 = 3; -1 < local_428; local_428 = local_428 + -1) {
          if (local_41c < *local_448) {
            *local_448 = local_41c;
            *local_424 = iVar1;
          }
          local_41c = local_41c + local_440;
          local_440 = local_440 + 0x3c80;
          local_448 = local_448 + 1;
          local_424 = local_424 + 1;
        }
        local_43c = local_43c + local_418;
        local_418 = local_418 + 0x1b320;
      }
      local_8 = local_8 + local_430;
      local_430 = local_430 + 0x7080;
    }
  }
  return;
}

