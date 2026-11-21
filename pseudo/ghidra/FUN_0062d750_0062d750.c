// FUN_0062d750  0062d750

char * FUN_0062d750(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 0xa002) {
    if (param_1 == 0xa001) {
      return "Invalid Name parameter passed to AL.";
    }
    switch(param_1) {
    case -0x86:
      pcVar1 = "Vorbis version mismatch.";
      break;
    case -0x85:
      pcVar1 = "Invalid Vorbis header.";
      break;
    case -0x84:
      pcVar1 = "Not Vorbis data.";
      break;
    default:
      goto switchD_0062d786_caseD_ffffff7d;
    case -0x81:
      pcVar1 = "Internal logic fault (bug or heap/stack corruption.";
      break;
    case -0x80:
      pcVar1 = "Read from media.";
    }
  }
  else {
switchD_0062d786_caseD_ffffff7d:
    pcVar1 = "Unknown Ogg error.";
  }
  return pcVar1;
}

