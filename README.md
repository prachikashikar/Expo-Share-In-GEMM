# Exponent Sharing in Generalized Matrix Multiplications
To reduce the memory requirement of neural network models, we proposed exponent sharing [[1]](#1) when weights are stored in a floating point precision. The concept is depicted in Fig. Matrix multiplications are at the core of neural networks. This repository contains the code for exponent sharing for Generalized Matrix Multiplications (GEMMs). Any pretrained model can benefit from exponent sharing in terms of storage requirements. The layerwise exponent sharing in a model saves the memory by at least 9% for no accuracy loss when weights are in IEEE Float32 format. One such example is shared [here](https://github.com/prachikashikar/Exponent-Sharing-on-HLS-LeNet-/tree/main).

![Expo Share]([http://url/to/img.png](https://github.com/prachikashikar/Expo-Share-In-GEMM/blob/main/Expo_sharing.png))

## References
<a id="1">[1]</a> 
P. Kashikar, S. Sinha and A. K. Verma, "Exploiting Weight Statistics for Compressed Neural Network Implementation on Hardware," 2021 IEEE 3rd International Conference on Artificial Intelligence Circuits and Systems (AICAS), 2021, pp. 1-4, doi: 10.1109/AICAS51828.2021.9458581.
