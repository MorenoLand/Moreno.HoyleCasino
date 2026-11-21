// FUN_005c2b40  005c2b40

undefined1 __thiscall FUN_005c2b40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  undefined1 local_9;
  uint local_8;
  
  local_9 = 1;
  cVar3 = FUN_005c15c0(param_2);
  if (cVar3 == '\0') {
    if (param_2 == 0x5e) {
      cVar3 = (**(code **)(*param_1 + 0x28))();
      if (((cVar3 != '\0') && (cVar3 = (**(code **)(*param_1 + 0x24))(), cVar3 == '\0')) &&
         (iVar2 = *(int *)(param_1[1] + 8), iVar1 = param_1[1], FUN_005c9140(),
         iVar2 <= *(int *)(iVar1 + 4))) {
        for (local_8 = 0; (int)local_8 < **(int **)(param_1[1] + 0x10); local_8 = local_8 + 1) {
          if (param_1[0x17] == 0) {
            local_5c = 0;
          }
          else {
            local_5c = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_5c <= local_8) {
            _invalid_parameter_noinfo();
          }
          *(float *)(param_1[0x17] + 0x14 + local_8 * 0x34) =
               (float)(int)local_8 * *(float *)(param_1[0x14] + 0x68) +
               *(float *)(param_1[0x14] + 100);
          iVar2 = param_1[1];
          if (*(int *)(iVar2 + 0x18 + local_8 * 4) < 0) {
            local_60 = -*(int *)(iVar2 + 0x18 + local_8 * 4);
          }
          else {
            local_60 = *(int *)(iVar2 + 0x18 + local_8 * 4);
          }
          if (param_1[0x17] == 0) {
            local_64 = 0;
          }
          else {
            local_64 = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_64 <= local_8) {
            _invalid_parameter_noinfo();
          }
          *(float *)(param_1[0x17] + 8 + local_8 * 0x34) = (float)local_60;
          if (param_1[0x17] == 0) {
            local_68 = 0;
          }
          else {
            local_68 = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_68 <= local_8) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(param_1[0x17] + 0xc + local_8 * 0x34) =
               *(undefined4 *)(param_1[0x14] + 0x6c);
          if (param_1[0x17] == 0) {
            local_6c = 0;
          }
          else {
            local_6c = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_6c <= local_8) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(param_1[0x17] + 0x10 + local_8 * 0x34) =
               *(undefined4 *)(param_1[0x14] + 0x70);
          if (param_1[0x17] == 0) {
            local_70 = 0;
          }
          else {
            local_70 = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_70 <= local_8) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(param_1[0x17] + 0x1c + local_8 * 0x34) = 2;
        }
        FUN_005c8fc0();
        FUN_00610980(param_1[0x14] + 0x88);
        FUN_005dd400(1);
        FUN_005c3110(1);
      }
    }
    else {
      local_9 = 0;
    }
    if (((0x3158db < param_2) && (param_2 < 0x3158e3)) && (param_1[0x15] == 1)) {
      uVar4 = param_2 - 0x3158dc;
      if (param_1[0x17] == 0) {
        local_74 = 0;
      }
      else {
        local_74 = (param_1[0x18] - param_1[0x17]) / 0x34;
      }
      if (local_74 <= uVar4) {
        _invalid_parameter_noinfo();
      }
      if (*(int *)(param_1[0x17] + 0x1c + uVar4 * 0x34) == 3) {
        if (param_1[0x17] == 0) {
          local_78 = 0;
        }
        else {
          local_78 = (param_1[0x18] - param_1[0x17]) / 0x34;
        }
        if (local_78 <= uVar4) {
          _invalid_parameter_noinfo();
        }
        cVar3 = FUN_005c9030(uVar4,*(undefined4 *)(uVar4 * 0x34 + param_1[0x17] + 8));
        if (cVar3 != '\0') {
          if (param_1[0x17] == 0) {
            local_7c = 0;
          }
          else {
            local_7c = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_7c <= uVar4) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(param_1[0x17] + 0x1c + uVar4 * 0x34) = 5;
          if (param_1[0x17] == 0) {
            local_80 = 0;
          }
          else {
            local_80 = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_80 <= uVar4) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(param_1[0x17] + 0x10 + uVar4 * 0x34) =
               *(undefined4 *)(param_1[0x14] + 0x7c);
          iVar2 = param_1[1];
          if (*(int *)(iVar2 + 0x18 + uVar4 * 4) < 0) {
            local_84 = -*(int *)(iVar2 + 0x18 + uVar4 * 4);
          }
          else {
            local_84 = *(int *)(iVar2 + 0x18 + uVar4 * 4);
          }
          if (param_1[0x17] == 0) {
            local_88 = 0;
          }
          else {
            local_88 = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_88 <= uVar4) {
            _invalid_parameter_noinfo();
          }
          FUN_005c42d0(local_84);
        }
      }
      local_9 = 1;
    }
    if (((0x3158e2 < param_2) && (param_2 < 0x315901)) &&
       ((cVar3 = (**(code **)(*param_1 + 0x28))(), cVar3 != '\0' &&
        (cVar3 = (**(code **)(*param_1 + 0x24))(), cVar3 == '\0')))) {
      FUN_005c8e20(param_2 + -0x3158e2,1);
      FUN_005c8e20(param_2 + -0x3158e1,0);
      FUN_005c3110(4);
      FUN_005c1b60();
      local_9 = 1;
    }
  }
  else {
    local_9 = 1;
  }
  return local_9;
}

