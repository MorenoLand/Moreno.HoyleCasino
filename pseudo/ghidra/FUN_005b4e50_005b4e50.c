// FUN_005b4e50  005b4e50

int __thiscall FUN_005b4e50(int param_1,int param_2)

{
  undefined4 local_c;
  
  if (param_2 == -1) {
    local_c = -1;
  }
  else if (param_2 == 4) {
    local_c = 0;
  }
  else {
    local_c = (int)*(char *)(param_1 + 0x67 + param_2 * 0x118);
  }
  return local_c;
}

