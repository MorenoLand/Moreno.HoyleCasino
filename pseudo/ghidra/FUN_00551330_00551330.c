// FUN_00551330  00551330

undefined4 __thiscall FUN_00551330(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 1;
  do {
    if (4 < local_c) {
      local_c = 1;
      do {
        local_18 = param_2;
        if (4 < local_c) {
          return 0;
        }
        while (local_18 = local_18 + 1, local_18 < 6) {
          for (local_14 = param_3; local_14 < param_4; local_14 = local_14 + 1) {
            cVar1 = FUN_005512b0(param_2,local_c,local_14,local_18);
            if (cVar1 != '\0') {
              for (local_10 = 0; iVar2 = FUN_0054c540(), local_10 < iVar2; local_10 = local_10 + 1)
              {
                iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_10 * 2));
                if ((iVar2 != 0x14) &&
                   ((((iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_10 * 2)),
                      local_14 <= iVar2 &&
                      (iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_10 * 2)),
                      iVar2 <= local_14 + 4)) ||
                     ((iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_10 * 2)),
                      iVar2 == 0xe && (local_14 == 1)))) &&
                    (iVar2 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_10 * 2)),
                    iVar2 == local_c)))) {
                  *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
                  local_8 = local_8 + 1;
                }
              }
              return 1;
            }
          }
        }
        local_c = local_c + 1;
      } while( true );
    }
    for (local_14 = param_3; local_14 < param_4; local_14 = local_14 + 1) {
      cVar1 = FUN_00551230(param_2,local_c,local_14);
      if (cVar1 != '\0') {
        for (local_10 = 0; iVar2 = FUN_0054c540(), local_10 < iVar2; local_10 = local_10 + 1) {
          iVar2 = FUN_0054c590(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_10 * 2)));
          if ((iVar2 != 0x14) &&
             ((((iVar2 = FUN_00641280(CONCAT22(extraout_var_00,
                                               *(undefined2 *)(param_1 + 4 + local_10 * 2))),
                local_14 <= iVar2 &&
                (iVar2 = FUN_00641280(CONCAT22(extraout_var_01,
                                               *(undefined2 *)(param_1 + 4 + local_10 * 2))),
                iVar2 <= local_14 + 4)) ||
               ((iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_10 * 2)), iVar2 == 0xe &&
                (local_14 == 1)))) &&
              (iVar2 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_10 * 2)), iVar2 == local_c))
             )) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
            local_8 = local_8 + 1;
          }
        }
        return 1;
      }
    }
    local_c = local_c + 1;
  } while( true );
}

