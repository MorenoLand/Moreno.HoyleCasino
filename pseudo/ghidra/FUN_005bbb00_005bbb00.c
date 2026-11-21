// FUN_005bbb00  005bbb00

int FUN_005bbb00(int param_1,int param_2,int param_3)

{
  undefined4 local_140;
  
  for (local_140 = param_1; local_140 != param_2; local_140 = local_140 + 0x10) {
    FUN_005bc040(local_140);
  }
  return (param_2 - param_1 >> 4) * 0x10 + param_3;
}

