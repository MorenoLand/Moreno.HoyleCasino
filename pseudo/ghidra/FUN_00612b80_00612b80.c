// FUN_00612b80  00612b80

int FUN_00612b80(int param_1,int param_2,int param_3)

{
  undefined4 local_24;
  
  for (local_24 = param_1; local_24 != param_2; local_24 = local_24 + 0x48) {
    FUN_00610650(local_24);
  }
  return ((param_2 - param_1) / 0x48) * 0x48 + param_3;
}

