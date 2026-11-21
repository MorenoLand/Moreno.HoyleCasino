// FUN_00563240  00563240

void __fastcall FUN_00563240(int *param_1)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  if ((*(char *)(DAT_0079343c + 0x3c) != '\0') && (*(int *)(DAT_0079343c + 8) == 0)) {
    switch(param_1[0x77]) {
    case 0:
      local_c = 1;
      break;
    case 1:
      local_c = 5;
      break;
    case 2:
      local_c = 10;
      break;
    case 3:
      local_c = 0x19;
      break;
    case 4:
      local_c = 0x32;
    }
    FUN_0056a7a0(local_c + -1,1);
    (**(code **)(*param_1 + 0xb0))(3);
    *(undefined1 *)(param_1 + 0x78) = 1;
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (local_8 != param_1[0x77]) {
        (**(code **)(**(int **)(DAT_00793440 + 0x60 + local_8 * 4) + 0xb0))(0);
        *(undefined1 *)(*(int *)(DAT_00793440 + 0x60 + local_8 * 4) + 0x1e0) = 0;
      }
    }
  }
  return;
}

