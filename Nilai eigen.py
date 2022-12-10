import numpy as np

print("NAMA KELOMPOK")
print("1. Asih Saputri\tNPM 21081010053")
print("2. Rizky Fatkhur Rohman \tNPM 21081010051")
print("3. Iqbal Tegar Sahputra \tNPM 21081010061")

#misalkan matriks
A = np.mat("1 -3 3; 3 -5 3; 6 6 4")

print("A : \n", A)

eigenvalue,eigenvector = np.linalg.eig(A)

#maka nilai eigen dan nilai vector nya 
print("Nilai Eigen : \n", eigenvalue)
print("Nilai Vector : \n", eigenvector)
