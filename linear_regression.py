from sklearn import linear_model
import numpy as np

# Sample data
X = np.array([[1], [2], [3], [4]])
y = np.array([2, 4, 5, 4])

# Create a linear regression model
model = linear_model.LinearRegression()

# Fit the model to the data
model.fit(X, y)

# Predict new values
X_new = np.array([[5]])
prediction = model.predict(X_new)

print("Predicted:", prediction)
