// FUN_0052d270  0052d270

void __fastcall FUN_0052d270(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a44f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = (**(code **)(*DAT_00793394 + 0x30))
                    (*(undefined4 *)(DAT_0079338c + 8),DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(char *)(DAT_0079338c + 0x7e) == '\0') {
    iVar3 = (**(code **)(*DAT_00793394 + 0x40))();
    if (iVar3 < 2) {
      if (*(int *)(DAT_007947e0 + 0x4f14) == 0xd) {
        if (*(int *)(DAT_0079338c + 100) != -1) {
          iVar2 = *(int *)(DAT_0079338c + 8);
          (**(code **)(*DAT_00793394 + 0x40))();
          cVar1 = '\0';
          switch(*(undefined4 *)(DAT_0079338c + 100)) {
          case 0:
            cVar1 = '\x04';
            break;
          case 1:
            cVar1 = '\x03';
            break;
          case 2:
            cVar1 = '\x02';
            break;
          case 3:
            cVar1 = '\x01';
            break;
          case 4:
            cVar1 = '\0';
            break;
          case 5:
            cVar1 = (-(iVar2 != 2) & 3U) + 7;
            break;
          case 6:
            cVar1 = (-(iVar2 != 2) & 3U) + 6;
            break;
          case 7:
            cVar1 = (-(iVar2 != 2) & 3U) + 5;
          }
          (**(code **)(**(int **)(param_1 + 0xcc) + 0xb0))(cVar1);
          pvVar4 = operator_new(0x28);
          local_8 = 5;
          if (pvVar4 == (void *)0x0) {
            local_a8 = 0;
          }
          else {
            local_a8 = FUN_00601110(0,0,1,0,0);
          }
          local_8 = 0xffffffff;
          FUN_005f5d50(local_a8);
          (**(code **)(**(int **)(param_1 + 0xcc) + 0x74))();
        }
      }
      else if (*(int *)(DAT_0079338c + 100) != -1) {
        iVar3 = *(int *)(DAT_0079338c + 100);
        iVar5 = FUN_00535e50();
        (**(code **)(**(int **)(param_1 + 0xcc) + 0xb0))(iVar2 - iVar3);
        pvVar4 = operator_new(0x28);
        local_8 = 6;
        if (pvVar4 == (void *)0x0) {
          local_ac = 0;
        }
        else {
          local_ac = FUN_00601110(0,0,1,0,0);
        }
        local_8 = 0xffffffff;
        FUN_005f5d50(local_ac);
        (**(code **)(**(int **)(param_1 + 0xcc) + 0x74))();
        (**(code **)(**(int **)(param_1 + 0xe0) + 0xb0))((iVar5 + -1) - iVar3);
        pvVar4 = operator_new(0x28);
        local_8 = 7;
        if (pvVar4 == (void *)0x0) {
          local_b0 = 0;
        }
        else {
          local_b0 = FUN_00601110(0,0,1,0,0);
        }
        local_8 = 0xffffffff;
        FUN_005f5d50(local_b0);
        (**(code **)(**(int **)(param_1 + 0xe0) + 0x74))();
      }
    }
    else {
      cVar1 = FUN_00538440();
      if (cVar1 == '\0') {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          if (*(int *)(DAT_0079338c + 100 + local_14 * 4) != -1) {
            if (*(int *)(DAT_0079338c + 100 + local_14 * 4) == 1000) {
              (**(code **)(**(int **)(param_1 + 0xe0 + local_14 * 4) + 0xb0))(local_14);
              pvVar4 = operator_new(0x28);
              local_8 = 3;
              if (pvVar4 == (void *)0x0) {
                local_9c = 0;
              }
              else {
                local_9c = FUN_00601110(0,0,1,0,0);
              }
              local_8 = 0xffffffff;
              FUN_005f5d50(local_9c);
              (**(code **)(**(int **)(param_1 + 0xe0 + local_14 * 4) + 0x74))();
            }
            else {
              (**(code **)(**(int **)(param_1 + 0xcc + local_14 * 4) + 0xb0))
                        (*(undefined4 *)(DAT_0079338c + 100 + local_14 * 4));
              pvVar4 = operator_new(0x28);
              local_8 = 4;
              if (pvVar4 == (void *)0x0) {
                local_a0 = 0;
              }
              else {
                local_a0 = FUN_00601110(0,0,1,0,0);
              }
              local_8 = 0xffffffff;
              FUN_005f5d50(local_a0);
              (**(code **)(**(int **)(param_1 + 0xcc + local_14 * 4) + 0x74))();
            }
            FUN_0052aea0(local_14 + 1);
          }
        }
      }
      else {
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          if (*(int *)(DAT_0079338c + 100 + local_14 * 4) != -1) {
            (**(code **)(**(int **)(param_1 + 0xcc + local_14 * 4) + 0xb0))
                      (*(int *)(DAT_0079338c + 100 + local_14 * 4) + 1);
            pvVar4 = operator_new(0x28);
            local_8 = 0;
            if (pvVar4 == (void *)0x0) {
              local_90 = 0;
            }
            else {
              local_90 = FUN_00601110(0,0,1,0,0);
            }
            local_8 = 0xffffffff;
            FUN_005f5d50(local_90);
            (**(code **)(**(int **)(param_1 + 0xcc + local_14 * 4) + 0x74))();
            (**(code **)(**(int **)(param_1 + 0xe0 + local_14 * 4) + 0xb0))
                      (*(undefined4 *)(DAT_0079338c + 100 + local_14 * 4));
            pvVar4 = operator_new(0x28);
            local_8 = 1;
            if (pvVar4 == (void *)0x0) {
              local_94 = 0;
            }
            else {
              local_94 = FUN_00601110(0,0,1,0,0);
            }
            local_8 = 0xffffffff;
            FUN_005f5d50(local_94);
            (**(code **)(**(int **)(param_1 + 0xe0 + local_14 * 4) + 0x74))();
            pvVar4 = operator_new(0x28);
            local_8 = 2;
            if (pvVar4 == (void *)0x0) {
              local_98 = 0;
            }
            else {
              local_98 = FUN_00601110(0,0,1,0,0);
            }
            local_8 = 0xffffffff;
            FUN_005f5d50(local_98);
            (**(code **)(**(int **)(param_1 + 0xb4 + local_14 * 4) + 0x74))();
          }
        }
      }
    }
  }
  if (99 < *(int *)(DAT_0079338c + 0x78)) {
    (**(code **)(**(int **)(param_1 + 0xc0) + 0xb0))(0);
    pvVar4 = operator_new(0x1c);
    local_8 = 8;
    if (pvVar4 == (void *)0x0) {
      local_b4 = 0;
    }
    else {
      local_b4 = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_b4);
    (**(code **)(**(int **)(param_1 + 0xc0) + 0x74))();
  }
  if ((0 < *(int *)(DAT_0079338c + 0x78)) &&
     (iVar2 = (**(code **)(*DAT_00793394 + 0x38))(), iVar2 != 0)) {
    (**(code **)(**(int **)(param_1 + 200) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + 200) + 0x74))();
  }
  if (*(char *)(DAT_0079338c + 0x7c) != '\0') {
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      FUN_005f5d50(0);
      (**(code **)(**(int **)(param_1 + 0xe0 + local_14 * 4) + 0x70))();
    }
    pvVar4 = operator_new(0x1c);
    local_8 = 9;
    if (pvVar4 == (void *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_b8);
    (**(code **)(**(int **)(param_1 + 200) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

