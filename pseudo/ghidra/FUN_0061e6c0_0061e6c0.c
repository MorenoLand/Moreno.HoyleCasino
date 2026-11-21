// FUN_0061e6c0  0061e6c0

int __thiscall FUN_0061e6c0(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  local_c = 0;
  if ((*(int *)(param_1 + 0x30) != 0x20584554) ||
     (local_c = FUN_00616c20(param_2,0,0), local_c == 0)) {
    local_8 = 0;
    while ((*(int *)(&DAT_00796400 + local_8 * 4) != 0 && (local_c == 0))) {
      if ((*(int *)(param_1 + 0x150) == 0) || (iVar1 = FUN_006044e0(), iVar1 == 0)) {
        if (*(int *)(param_1 + 0x34) != 0) {
          sprintf(param_2,"%s%c%d.%c%c%c%c",*(undefined4 *)(&DAT_00796400 + local_8 * 4),0x5c,
                  *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
                  *(int *)(param_1 + 0x30) >> 8,*(int *)(param_1 + 0x30) >> 0x10,
                  *(int *)(param_1 + 0x30) >> 0x18);
        }
        iVar1 = strcmp((char *)(param_1 + 0x38),(char *)&PTR_006b27f8);
        if (iVar1 != 0) {
          sprintf(param_2,"%s%c%s.%c%c%c%c",*(undefined4 *)(&DAT_00796400 + local_8 * 4),0x5c,
                  param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
                  *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
        }
      }
      else {
        if (*(int *)(param_1 + 0x34) != 0) {
          uVar2 = FUN_006044e0(0x5c,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
                               *(int *)(param_1 + 0x30) >> 8,*(int *)(param_1 + 0x30) >> 0x10,
                               *(int *)(param_1 + 0x30) >> 0x18);
          sprintf(param_2,"%s%c%s%c%d.%c%c%c%c",*(undefined4 *)(&DAT_00796400 + local_8 * 4),0x5c,
                  uVar2);
        }
        iVar1 = strcmp((char *)(param_1 + 0x38),(char *)&PTR_006b27f8);
        if (iVar1 != 0) {
          uVar2 = FUN_006044e0(0x5c,param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),
                               *(int *)(param_1 + 0x30) >> 8,*(int *)(param_1 + 0x30) >> 0x10,
                               *(int *)(param_1 + 0x30) >> 0x18);
          sprintf(param_2,"%s%c%s%c%s.%c%c%c%c",*(undefined4 *)(&DAT_00796400 + local_8 * 4),0x5c,
                  uVar2);
        }
      }
      FUN_005ea5b0(param_2);
      local_c = FUN_005ea9c0(param_2,&DAT_006c2d28);
      if ((DAT_00795f94 == '\0') && (local_c == 0)) {
        if ((*(int *)(param_1 + 0x150) == 0) || (iVar1 = FUN_006044e0(), iVar1 == 0)) {
          if (*(int *)(param_1 + 0x34) != 0) {
            sprintf(param_2,"%s%coptional%c%d.%c%c%c%c",*(undefined4 *)(&DAT_00796400 + local_8 * 4)
                    ,0x5c,0x5c,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
                    *(int *)(param_1 + 0x30) >> 8,*(int *)(param_1 + 0x30) >> 0x10,
                    *(int *)(param_1 + 0x30) >> 0x18);
          }
          iVar1 = strcmp((char *)(param_1 + 0x38),(char *)&PTR_006b27f8);
          if (iVar1 != 0) {
            sprintf(param_2,"%s%coptional%c%s.%c%c%c%c",*(undefined4 *)(&DAT_00796400 + local_8 * 4)
                    ,0x5c,0x5c,param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),
                    *(int *)(param_1 + 0x30) >> 8,*(int *)(param_1 + 0x30) >> 0x10,
                    *(int *)(param_1 + 0x30) >> 0x18);
          }
        }
        else {
          if (*(int *)(param_1 + 0x34) != 0) {
            uVar2 = FUN_006044e0(0x5c,0x5c,*(undefined4 *)(param_1 + 0x34),
                                 *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
                                 *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
            sprintf(param_2,"%s%c%s%coptional%c%d.%c%c%c%c",
                    *(undefined4 *)(&DAT_00796400 + local_8 * 4),0x5c,uVar2);
          }
          iVar1 = strcmp((char *)(param_1 + 0x38),(char *)&PTR_006b27f8);
          if (iVar1 != 0) {
            uVar2 = FUN_006044e0(0x5c,0x5c,param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),
                                 *(int *)(param_1 + 0x30) >> 8,*(int *)(param_1 + 0x30) >> 0x10,
                                 *(int *)(param_1 + 0x30) >> 0x18);
            sprintf(param_2,"%s%c%s%coptional%c%s.%c%c%c%c",
                    *(undefined4 *)(&DAT_00796400 + local_8 * 4),0x5c,uVar2);
          }
        }
        FUN_005ea5b0(param_2);
        local_c = FUN_005ea9c0(param_2,&DAT_006c2d28);
      }
      local_8 = local_8 + 1;
    }
  }
  return local_c;
}

