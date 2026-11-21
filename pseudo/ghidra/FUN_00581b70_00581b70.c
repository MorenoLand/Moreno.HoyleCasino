// FUN_00581b70  00581b70

void __fastcall FUN_00581b70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int local_88;
  char local_84 [68];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  char acStack_27 [23];
  int local_10;
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 0x4080) + 0xb4))
            (param_1 + 0x39b8 + *(int *)(param_1 + 0x407c) * 0x10);
  (**(code **)(**(int **)(param_1 + 0x4080) + 0x74))();
  FUN_00582410();
  if (*(int *)(param_1 + 0x3a18 + *(int *)(param_1 + 0x407c) * 4) != 0) {
    local_30 = *(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4);
    puVar2 = (undefined4 *)
             (param_1 + 0x178 + *(int *)(param_1 + 0x407c) * 0xe10 +
             *(int *)(param_1 + 0x3a28 + *(int *)(param_1 + 0x407c) * 400 + local_30 * 4) * 0x24);
    pcVar3 = &local_2c;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      pcVar3 = pcVar3 + 4;
    }
    local_3c = local_10;
    local_40 = (int)local_2a;
    local_34 = local_10 + -1 + local_40;
    if (1000 < local_34) {
      local_34 = local_34 + -1000;
    }
    if (local_40 < 2) {
      sprintf(local_84,"%04d",local_10);
    }
    else {
      sprintf(local_84,"%04d-%04d",local_10,local_34);
    }
    (**(code **)(**(int **)(param_1 + 0x4084) + 0xb4))(local_84);
    (**(code **)(**(int **)(param_1 + 0x4084) + 0x74))();
    if (local_29 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x4318) + 0x74))();
    }
    if (local_2c < '\x04') {
      local_88 = 0;
      for (local_38 = 0; local_38 < 0x14; local_38 = local_38 + 1) {
        if (acStack_27[local_38] != '\0') {
          local_88 = local_88 + 1;
        }
      }
      sprintf(local_84,"%d",local_88);
      (**(code **)(**(int **)(param_1 + 0x4088) + 0xb4))(local_84);
      (**(code **)(**(int **)(param_1 + 0x4088) + 0x74))();
    }
    sprintf(local_84,"%d",local_40);
    (**(code **)(**(int **)(param_1 + 0x408c) + 0xb4))(local_84);
    (**(code **)(**(int **)(param_1 + 0x408c) + 0x74))();
    sprintf(local_84,"$%d",(int)local_2b);
    (**(code **)(**(int **)(param_1 + 0x4090) + 0xb4))(local_84);
    (**(code **)(**(int **)(param_1 + 0x4090) + 0x74))();
    sprintf(local_84,"$%d",local_2b * local_40);
    (**(code **)(**(int **)(param_1 + 0x4094) + 0xb4))(local_84);
    (**(code **)(**(int **)(param_1 + 0x4094) + 0x74))();
    switch(local_2c) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x03':
      for (local_38 = 0; local_38 < 0x14; local_38 = local_38 + 1) {
        if (acStack_27[local_38] != '\0') {
          (**(code **)(**(int **)(param_1 + 0x4094 + acStack_27[local_38] * 4) + 0x74))();
        }
      }
      break;
    case '\x04':
      (**(code **)(**(int **)(param_1 + 0x431c) + 0xb0))(2);
      (**(code **)(**(int **)(param_1 + 0x431c) + 0x74))();
      for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
        (**(code **)(**(int **)(param_1 + 0x4098 + local_38 * 4) + 0x74))();
        (**(code **)(**(int **)(param_1 + 0x41b0 + local_38 * 4) + 0x74))();
      }
      for (local_38 = 0; local_38 < 8; local_38 = local_38 + 1) {
        (**(code **)(**(int **)(param_1 + 0x4098 + local_38 * 0x28) + 0x74))();
        (**(code **)(**(int **)(param_1 + 0x40bc + local_38 * 0x28) + 0x74))();
      }
      break;
    case '\x05':
      (**(code **)(**(int **)(param_1 + 0x431c) + 0xb0))(0);
      (**(code **)(**(int **)(param_1 + 0x431c) + 0x74))();
      break;
    case '\x06':
      (**(code **)(**(int **)(param_1 + 0x431c) + 0xb0))(1);
      (**(code **)(**(int **)(param_1 + 0x431c) + 0x74))();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

