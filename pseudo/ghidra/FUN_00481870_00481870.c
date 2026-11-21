// FUN_00481870  00481870

undefined4 FUN_00481870(int param_1)

{
  undefined4 local_24 [8];
  
  local_24[0] = 1;
  local_24[1] = 2;
  local_24[2] = 4;
  local_24[3] = 5;
  local_24[4] = 6;
  local_24[5] = 7;
  local_24[6] = 9;
  local_24[7] = 10;
  if ((param_1 < 0) || (7 < param_1)) {
    param_1 = 0;
  }
  return local_24[param_1];
}

