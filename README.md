# ExpoShareInGEMM
To reduce the memory requirement of neural network models, we proposed exponent sharing when weights are stored in a floating point precision. Matrix multiplications are at the core of neural networks. This repository contains the code for exponent sharing for Generalised Matrix Multiplications (GEMMs). The exponent sharing in GEMMs of all layers of a model saves the memory by at least 9% for no accuracy loss when weights are in IEEE Float32 format. One such example is shared here.
