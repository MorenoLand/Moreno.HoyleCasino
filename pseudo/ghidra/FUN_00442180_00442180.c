// FUN_00442180  00442180

void __fastcall FUN_00442180(int param_1)

{
  int iVar1;
  int local_34;
  int local_30 [5];
  int local_1c [5];
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    local_1c[local_8] = *(int *)(DAT_007906f0 + 0x48 + local_8 * 0x78);
    local_30[local_8] = -1;
  }
  local_8 = 0;
  do {
    if (4 < local_8) {
      qsort(local_1c,5,4,FUN_00443410);
      local_8 = 0;
      do {
        if (4 < local_8) {
          for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
            (**(code **)(**(int **)(param_1 + 0xb4 + local_30[local_8] * 4) + 0x44))
                      (0,local_8 * 0x14);
            (**(code **)(**(int **)(param_1 + 0xb4 + local_30[local_8] * 4) + 0x74))();
          }
          if (*(int *)(DAT_007906f0 + 0x48 + local_30[0] * 0x78) == 0x17) {
            FUN_0043d630(local_30[0],local_30[1],local_30[2]);
          }
          if ((0x2f < *(int *)(DAT_007906f0 + 0x48 + local_30[0] * 0x78)) &&
             (*(int *)(DAT_007906f0 + 0x48 + local_30[0] * 0x78) < 0x35)) {
            iVar1 = FUN_0062fbf0(2);
            if (iVar1 == 0) {
              FUN_0043d410(local_30[0],local_30[1],local_30[2],local_30[3],local_30[4]);
            }
            else {
              FUN_0043d660(local_30[0],local_30[1],local_30[2]);
            }
          }
          if ((0x6b < *(int *)(DAT_007906f0 + 0x48 + local_30[0] * 0x78)) &&
             (*(int *)(DAT_007906f0 + 0x48 + local_30[0] * 0x78) < 0x74)) {
            FUN_0043d690(local_30[0],local_30[1],local_30[2]);
          }
          if (*(char *)(param_1 + 0x1c) == '\0') {
            if (((*(int *)(DAT_007906f0 + 0x48 + local_30[0] * 0x78) ==
                  *(int *)(DAT_007906f0 + 0x48 + local_30[1] * 0x78)) &&
                (0x86 < *(int *)(DAT_007906f0 + 0x48 + local_30[0] * 0x78))) &&
               (*(int *)(DAT_007906f0 + 0x48 + local_30[0] * 0x78) < 0x8f)) {
              FUN_0043d940();
            }
          }
          return;
        }
        for (local_34 = 0; local_34 < 5; local_34 = local_34 + 1) {
          if ((*(int *)(DAT_007906f0 + 0x48 + local_8 * 0x78) == local_1c[local_34]) &&
             (local_30[local_34] == -1)) {
            local_30[local_34] = local_8;
            break;
          }
        }
        local_8 = local_8 + 1;
      } while( true );
    }
    for (local_34 = 0; local_34 < 5; local_34 = local_34 + 1) {
      if (*(int *)(DAT_007906f0 + 0x6c + local_8 * 0x78) == local_34) {
        local_30[local_34] = local_8;
        break;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

