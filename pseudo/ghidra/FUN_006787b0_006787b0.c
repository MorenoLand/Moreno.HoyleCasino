// FUN_006787b0  006787b0

void __fastcall FUN_006787b0(int *param_1)

{
  switch(param_1[5]) {
  case 0:
    (**(code **)(*param_1 + 8))(param_1[5] + 1,param_1[10]);
    return;
  case 1:
    FUN_0064f950(1,param_1[5]);
  case 2:
  case 3:
    (**(code **)(*param_1 + 8))(param_1[5] + 1,0x5a);
    break;
  case 4:
    (**(code **)(*param_1 + 8))(5,600);
    param_1[9] = param_1[9] + 1;
    break;
  case 5:
    FUN_0064fa40();
    if ((char)param_1[8] != '\0') {
      FUN_0064fa90(0,0);
      return;
    }
    (**(code **)(*param_1 + 8))(1,300);
    return;
  }
  if ((DAT_016306c4 != 0) && (param_1[5] != 1)) {
    FUN_0066e9e0(1,param_1[5]);
  }
  return;
}

