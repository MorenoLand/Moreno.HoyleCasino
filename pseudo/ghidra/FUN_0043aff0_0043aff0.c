// FUN_0043aff0  0043aff0

undefined4 __thiscall FUN_0043aff0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(&DAT_00713234 + param_2 * 8);
  switch(param_2) {
  case 1:
    switch(*(undefined4 *)(param_1 + 0xac4)) {
    case 4:
    case 10:
      local_8 = 1;
      break;
    case 5:
    case 9:
      local_8 = 2;
      break;
    case 6:
    case 8:
      local_8 = 5;
    }
    break;
  case 3:
    switch(*(undefined4 *)(param_1 + 0xac4)) {
    case 4:
    case 10:
      local_8 = 2;
      break;
    case 5:
    case 9:
      local_8 = 3;
      break;
    case 6:
    case 8:
      local_8 = 6;
    }
    break;
  case 0x12:
    switch(*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0)) {
    case 2:
    case 0xc:
      local_8 = 1;
      break;
    case 3:
    case 0xb:
      local_8 = 1;
    }
    break;
  case 0x3d:
    iVar1 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0);
    if ((iVar1 == 2) || (iVar1 == 0xc)) {
      local_8 = 1;
    }
    else {
      local_8 = 1;
    }
  }
  return local_8;
}

